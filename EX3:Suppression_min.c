void supprimerMin(LISTE **L) {
    if (*L == NULL) return;

    LISTE *tmp = *L, *min = *L, *prev = NULL, *pmin = NULL;

    while (tmp->suivant != NULL) {
        if (tmp->suivant->val < min->val) {
            min = tmp->suivant;
            pmin = tmp;
        }
        tmp = tmp->suivant;
    }

    if (pmin == NULL)
        *L = (*L)->suivant;
    else
        pmin->suivant = min->suivant;

    free(min);
}
