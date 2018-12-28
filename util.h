#ifndef ST_UTIL_H
#define ST_UTIL_H

/* "raw" debug printf */
#ifdef EBUG
#define drprintf(...) do { fprintf(stderr, __VA_ARGS__); } while (0)
#else
#define drprintf(...)
#endif

/* debug printf */
#ifdef EBUG
#define dprintf(...) do { fprintf(stderr, "%s:%d:%s(): ",__FILE__, __LINE__, __func__);\
             fprintf(stderr, __VA_ARGS__); } while (0)
#else
#define dprintf(...)
#endif

#endif
