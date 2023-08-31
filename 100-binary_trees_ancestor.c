#include "binary_trees.h"

/**
 * binary_trees_ancestor - Identifies the nodes' lowest common ancestor.
 * @first: an indication of the initial zode.
 * @second: a reference to the subsequent zode.
 * Return: a reference to the two provided nodes' lowest common ancestor zode.
 *    Your function must return NULL if no shared ancestor was discovered.
 */
binary_tree_t *binary_trees_ancestor(const
binary_tree_t
*first,
const
binary_tree_t
*second)
{
binary_tree_t *vzy,
*qxy;

if (!first ||
!second)
return (NULL);
if (first ==
second)
return ((binary_tree_t *)first);

vzy = first->parent, qxy =
second->parent;
if (first ==
qxy || !vzy || (!vzy->
parent &&
qxy))
return (binary_trees_ancestor(first,
qxy));
else if (vzy ==
second || !qxy || (!qxy->
parent &&
vzy))
return (binary_trees_ancestor(vzy,
second));

return (binary_trees_ancestor(vzy,
qxy));
}
