#ifndef MLEAK_H
#define MLEAK_H

#include <malloc.h>

#define MALLOC(n) mallocEx(n, __FILE__, __LINE__)
#define FREE(p) freeEx(p)

void* mallocEx(size_t n, const char* file, const line);
void freeEx(void* p);
void PRINT_LEAK_INFO();
#define SIZE 256

/* ��̬�ڴ���������ṹ�� */
typedef struct
{
    void* pointer;
    int size;
    const char* file;
    int line;
} MItem;

static MItem g_record[SIZE]; /* ��¼��̬�ڴ�����Ĳ��� */

void* mallocEx(size_t n, const char* file, const line)
{
    void* ret = malloc(n); /* ��̬�ڴ����� */

    if( ret != NULL )
    {
        int i = 0;

        /* ����ȫ�����飬��¼�˴β��� */
        for(i=0; i<SIZE; i++)
        {
            /* ����λ�� */
            if( g_record[i].pointer == NULL )
            {
                g_record[i].pointer = ret;
                g_record[i].size = n;
                g_record[i].file = file;
                g_record[i].line = line;
                break;
            }
        }
    }

    return ret;
}

void freeEx(void* p)
{
    if( p != NULL )
    {
        int i = 0;

        /* ����ȫ�����飬�ͷ��ڴ�ռ䣬�����������¼ */
        for(i=0; i<SIZE; i++)
        {
            if( g_record[i].pointer == p )
            {
                g_record[i].pointer = NULL;
                g_record[i].size = 0;
                g_record[i].file = NULL;
                g_record[i].line = 0;

                free(p);

                break;
            }
        }
    }
}

void PRINT_LEAK_INFO()
{
    int i = 0;

    printf("Potential Memory Leak Info:\n");

    /* ����ȫ�����飬��ӡδ�ͷŵĿռ��¼ */
    for(i=0; i<SIZE; i++)
    {
        if( g_record[i].pointer != NULL )
        {
            printf("Address: %p, size:%d, Location: %s:%d\n", g_record[i].pointer, g_record[i].size, g_record[i].file, g_record[i].line);
        }
    }
}

#endif
