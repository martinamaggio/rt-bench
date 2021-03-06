#ifndef _RT_BENCH_H_
#define _RT_BENCH_H_

#include <stdlib.h>
#include <stdio.h>
#include <error.h>
#include <time.h>
#include <sched.h>
#include <pthread.h>
#include <signal.h>
#include <sys/mman.h>  /* for memlock */

#define __STDC_FORMAT_MACROS
#include <inttypes.h>

#include "rt-bench_types.h"
#include "rt-bench_args.h"

/*
 * BUDGET_OVERP is a percentage of extra budget. If assigned budget in
 json file is Q, then the real assigned budget is Q*(1+BUDGET_OVERP/100)
 */
#define BUDGET_OVERP 0

void *thread_body(void *arg);

#endif /* _RT_BENCH_H_ */

