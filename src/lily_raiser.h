#ifndef LILY_RAISER_H
# define LILY_RAISER_H

# include <setjmp.h>

# include "lily_core_types.h"
# include "lily_msgbuf.h"

# define lily_Error               0
# define lily_SyntaxError         1
# define lily_DivisionByZeroError 2
# define lily_IndexError          3
# define lily_BadTypecastError    4
# define lily_ValueError          5
# define lily_RecursionError      6
# define lily_KeyError            7
# define lily_FormatError         8
# define lily_IOError             9

typedef struct lily_raiser_t {
    /* The raiser will typically have two jumps: One for the vm to catch runtime
       errors, and a second for the runner to catch parser errors. The raiser
       will use the highest jump it has (the vm, typically). */
    jmp_buf *jumps;
    lily_value *exception;
    lily_msgbuf *msgbuf;

    /* This is 0 if the error line is the lexer's current line number.
       Otherwise, this is the line number to report. It is not an offset.
       Uses:
       * Merging ASTs. number a = 1 +
         1 should report an error on line 1 (the assignment), not line 2.
       * Any vm error. */
    uint32_t line_adjust;
    uint32_t error_code;
    uint16_t jump_pos;
    uint16_t jump_size;
    uint32_t pad;

    lily_mem_func mem_func;
} lily_raiser;

lily_raiser *lily_new_raiser(lily_mem_func);
void lily_free_raiser(lily_raiser *);
void lily_raise(lily_raiser *, int, char *, ...);
void lily_raise_prebuilt(lily_raiser *, int);
void lily_raise_value(lily_raiser *, lily_value *);

const char *lily_name_for_error(lily_raiser *);

#endif
