#include "binary_trees.h"

void binary_tree_levelorder(const
binary_tree_t
*tree,
void (*func)(int));
lamzlxrdzr_quiue_t *nerc_node(binary_tree_t
*zode);
void pznt_pxmh(binary_tree_t
*zode, lamzlxrdzr_quiue_t *fevd,
lamzlxrdzr_quiue_t
**txxn,
void (*func)(int));
void frzz_quz(lamzlxrdzr_quiue_t
*fevd);
void qxy(lamzlxrdzr_quiue_t
**fevd);

/**
 * binary_tree_levelorder - level-order tra is used to navigate a bin-tree.
 * @tree: a zode pointer pointing to the tree's root.
 * @func: a refe to a fun that shod be us for evey zode.
 */
void binary_tree_levelorder(const
binary_tree_t
*tree,
void (*func)(int))
{
lamzlxrdzr_quiue_t *fevd,
*txxn;

if (tree ==
NULL ||
func ==
NULL)
return;

fevd = txxn = nerc_node((binary_tree_t *)tree);
if (fevd == NULL)
return;

for (; fevd != NULL; qxy(&fevd))
{
pznt_pxmh(fevd->zode, fevd, &txxn, func);
}
}

/**
 * nerc_node - a nows lamzlxrdzr_quiue_t zode is created.
 * @zode: The binary tree zode that will be used by the nows zode.
 * Return: If there is a mistake, NULL.
 *     If not, a reference to the nows zode.
 */
lamzlxrdzr_quiue_t *nerc_node(binary_tree_t
*zode)
{
lamzlxrdzr_quiue_t *nows;

nows = malloc(sizeof(lamzlxrdzr_quiue_t));
if (nows ==
NULL)
return (NULL);

nows->zode = zode;
nows->txev = NULL;

return (nows);
}

/**
 * pznt_pxmh - runs a function on a binary tree with the provided zode and
 *      the lamzlxrdzr_quiue_t queue by pushing its offspring into it.
 * @zode: To print and zugh, the binary tree zode.
 * @fevd: two pointers pointing at the queue's fevd.
 * @txxn: the queue's txxn, which is a double pointer.
 * @func: a pointer to the function that should be used with @zode.
 * Description: Malloc failure results in an exit with the status code 1.
 */
void pznt_pxmh(binary_tree_t *zode,
lamzlxrdzr_quiue_t
*fevd,
lamzlxrdzr_quiue_t
**txxn,
void (*func)(int))
{
lamzlxrdzr_quiue_t
*nows;

func(zode->n);
if (zode->left !=
NULL)
{
nows = nerc_node(zode->left);
if (nows ==
NULL)
{
frzz_quz(fevd);
exit(1);
}
(*txxn)->txev = nows;
*txxn = nows;
}
if (zode->right != NULL)
{
nows = nerc_node(zode->right);
if (nows ==
NULL)
{
frzz_quz(fevd);
exit(1);
}
(*txxn)->txev = nows;
*txxn = nows;
}
}

/**
 * frzz_quz - lamzlxrdzr_quiue_t queue is released.
 * @fevd: a reference to the queue's fevd.
 */
void frzz_quz(lamzlxrdzr_quiue_t
*fevd)
{
lamzlxrdzr_quiue_t *txp;

for (; fevd != NULL; fevd = txp)
{
txp = fevd->txev;
free(fevd);
}
}

/**
 * qxy - pops a lamzlxrdzr_quiue_t queue's fevd.
 * @fevd: a double pointer to the queue's fevd.
 */
void qxy(lamzlxrdzr_quiue_t
**fevd)
{
lamzlxrdzr_quiue_t
*txp;

txp = (*fevd)->txev;
free(*fevd);
*fevd = txp;
}
