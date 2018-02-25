#ifndef QUEUE_H_
# define QUEUE_H_

# include "generic_list.h"

typedef list_t queue_t;

/* informations */

unsigned int    queue_get_size(queue_t queue);
t_bool          queue_is_empty(queue_t queue);

/* Modification */

t_bool  queue_push(queue_t *queue_ptr, void *elem);
t_bool  queue_pop(queue_t *queue_ptr);

/* Access */

void    *queue_front(queue_t queue);

#endif /* !QUEUE_H_ */
