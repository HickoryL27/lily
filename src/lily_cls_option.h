#ifndef LILY_CLS_OPTION_H
# define LILY_CLS_OPTION_H

# include "lily_core_types.h"

lily_instance_val *lily_new_option_some(lily_value *);
lily_instance_val *lily_new_option_some_noref(lily_value *);
lily_instance_val *lily_get_option_none(struct lily_vm_state_ *);

#endif
