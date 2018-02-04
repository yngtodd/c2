// WARNING: this file is auto-generated by the C2 compiler.
// Any changes you make might be lost!

#ifndef STDLIB_H
#define STDLIB_H

#include "c2types.h"

#include "c2.h"

#ifdef __cplusplus
extern "C" {
#endif

#define RAND_MAX 2147483647
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
typedef struct div_t_ div_t;

typedef struct ldiv_t_ ldiv_t;

typedef struct random_data_ random_data;

typedef struct drand48_data_ drand48_data;

struct div_t_ {
  int32_t quot;
  int32_t rem;
};

struct ldiv_t_ {
  int64_t quot;
  int64_t rem;
};

typedef void (*AtExitFn)();

typedef void (*OnExitFn)(int32_t _arg0, void* _arg1);

typedef int32_t (*__compar_fn_t)(const void* _arg0, const void* _arg1);

void* calloc(uint64_t count, uint64_t size);
void* malloc(uint64_t size);
void* realloc(void* ptr, uint64_t size);
void* valloc(uint64_t size);
void free(void* ptr);
double atof(const char* nptr);
int32_t atoi(const char* nptr);
int64_t atol(const char* nptr);
int64_t atoll(const char* nptr);
double strtod(const char* nptr, char** endptr);
float strtof(const char* nptr, char** endptr);
int64_t strtol(const char* nptr, char** endptr, int32_t base);
uint64_t strtoul(const char* nptr, char** endptr, int32_t base);
int64_t strtoq(const char* nptr, char** endptr, int32_t base);
uint64_t strtouq(const char* nptr, char** endptr, int32_t base);
int64_t strtoll(const char* nptr, char** endptr, int32_t base);
uint64_t strtoull(const char* nptr, char** endptr, int32_t base);
char* l64a(int64_t n);
int64_t a64l(const char* s);
int64_t random();
void srandom(uint32_t __seed);
char* initstate(uint32_t __seed, char* __statebuf, uint64_t __statelen);
char* setstate(char* __statebuf);
int32_t random_r(random_data* __buf, int32_t* __result);
int32_t srandom_r(uint32_t __seed, random_data* __buf);
int32_t initstate_r(uint32_t __seed, char* __statebuf, uint64_t __statelen, random_data* __buf);
int32_t setstate_r(char* __statebuf, random_data* __buf);
int32_t rand();
void srand(uint32_t __seed);
int32_t rand_r(uint32_t* __seed);
double drand48();
double erand48(uint16_t* __xsubi);
int64_t lrand48();
int64_t nrand48(uint16_t* __xsubi);
int64_t mrand48();
int64_t jrand48(uint16_t* __xsubi);
void srand48(int64_t __seedval);
uint16_t* seed48(uint16_t* __seed16v);
void lcong48(uint16_t* __param);
int32_t drand48_r(drand48_data* __buffer, double* __result);
int32_t erand48_r(uint16_t* __xsubi, drand48_data* __buffer, double* __result);
int32_t lrand48_r(drand48_data* __buffer, int64_t* __result);
int32_t nrand48_r(uint16_t* __xsubi, drand48_data* __buffer, int64_t* __result);
int32_t mrand48_r(drand48_data* __buffer, int64_t* __result);
int32_t jrand48_r(uint16_t* __xsubi, drand48_data* __buffer, int64_t* __result);
int32_t srand48_r(int64_t __seedval, drand48_data* __buffer);
int32_t seed48_r(uint16_t* __seed16v, drand48_data* __buffer);
int32_t lcong48_r(uint16_t* __param, drand48_data* __buffer);
int32_t posix_memalign(void** __memptr, uint64_t __alignment, uint64_t __size);
void* aligned_alloc(int32_t __alignment, uint64_t __size);
void abort();
int32_t atexit(AtExitFn __func);
int32_t at_quick_exit(AtExitFn __func);
int32_t on_exit(OnExitFn __func, void* __arg);
void exit(int32_t __status);
void quick_exit(int32_t __status);
void _Exit(int32_t __status);
char* getenv(const char* __name);
int32_t putenv(char* __string);
int32_t setenv(const char* __name, const char* __value, int32_t __replace);
int32_t unsetenv(const char* __name);
int32_t clearenv();
int32_t mkstemp(char* __template);
int32_t mkstemps(char* __template, int32_t __suffixlen);
char* mkdtemp(char* __template);
int32_t system(const char* __command);
char* realpath(const char* __name, char* __resolved);
char* mktemp(char* __template);
void* bsearch(const void* __key, const void* __base, uint64_t __nmemb, uint64_t __size, __compar_fn_t __compar);
void qsort(void* __base, uint64_t __nmemb, uint64_t __size, __compar_fn_t __compar);
int32_t abs(int32_t __x);
int64_t labs(int64_t __x);
div_t div(int32_t __numer, int32_t __denom);
ldiv_t ldiv(int64_t __numer, int64_t __denom);
char* ecvt(double __value, int32_t __ndigit, int32_t* __decpt, int32_t* __sign);
char* fcvt(double __value, int32_t __ndigit, int32_t* __decpt, int32_t* __sign);
char* gcvt(double __value, int32_t __ndigit, char* __buf);
char* qecvt(double __value, int32_t __ndigit, int32_t* __decpt, int32_t* __sign);
char* qfcvt(double __value, int32_t __ndigit, int32_t* __decpt, int32_t* __sign);
char* qgcvt(double __value, int32_t __ndigit, char* __buf);
int32_t ecvt_r(double __value, int32_t __ndigit, int32_t* __decpt, int32_t* __sign, char* __buf, uint64_t __len);
int32_t fcvt_r(double __value, int32_t __ndigit, int32_t* __decpt, int32_t* __sign, char* __buf, uint64_t __len);
int32_t qecvt_r(double __value, int32_t __ndigit, int32_t* __decpt, int32_t* __sign, char* __buf, uint64_t __len);
int32_t qfcvt_r(double __value, int32_t __ndigit, int32_t* __decpt, int32_t* __sign, char* __buf, uint64_t __len);
int32_t mblen(const char* __s, uint64_t __n);
int32_t mbtowc(int32_t* __pwc, const char* __s, uint64_t __n);
int32_t mbstowcs(int32_t* __pwcs, const char* __s, uint64_t __n);
int32_t wcstombs(char* __s, const int32_t* __pwcs, uint64_t __n);
int32_t rpmatch(const char* __response);
int32_t getsubopt(char** __optionp, char** __tokens, char** __valuep);
int32_t getloadavg(double* __loadavg, int32_t __nelem);

#ifdef __cplusplus
}
#endif

#endif