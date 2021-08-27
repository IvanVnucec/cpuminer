#include "miner.h"


int main(void) {
    int thr_id;
    uint32_t *pdata;
    const uint32_t *ptarget;
	uint32_t max_nonce;
    unsigned long hashes_done;
    int rc;

    rc = scanhash_sha256d(thr_id, pdata, ptarget, max_nonce, &hashes_done);
    
    (void) rc;

    return 0;
}
