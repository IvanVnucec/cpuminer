#include "miner.h"


int main(void) {

    /*
	    Example:

        [2021-08-31 12:18:38]
        https://www.blockchain.com/btc/block/0000000000000000000a7eec5515ebdc6831c5b16074534b795526fadd08648a
        data = 20000004dd08648a795526fa6074534b6831c5b15515ebdc000a7eec0000000000000000cde3e1ea69b513b83d74a69a0f8e2a5bdb9bff965ef7bfa74f8d51e25dbfab70612e01fc170ffaa000002000000000800000000000000000000000000000000000000000000000000000000000000000000000000000000080020000
        target = 000000000000000000000000000000000000000000000000f8ff070000000000
    */

    work_restart = calloc(opt_n_threads, sizeof(*work_restart));
	if (!work_restart)
		return 1;

    int thr_id = 0;
    uint32_t pdata[32] = {
        0x20000004,
        0xdd08648a,
        0x795526fa,
        0x6074534b,
        0x6831c5b1,
        0x5515ebdc,
        0x000a7eec,
        0x00000000,
        0x00000000,
        0xcde3e1ea,
        0x69b513b8,
        0x3d74a69a,
        0x0f8e2a5b,
        0xdb9bff96,
        0x5ef7bfa7,
        0x4f8d51e2,
        0x5dbfab70,
        0x612e01fc,
        0x170ffaa0,
        0x00002000,
        0x00000080,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x80020000
    };

    pdata[19] = 2719510680 - 10;

    const uint32_t ptarget[8] = {
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0x00000000,
        0xf8ff0700,
        0x00000000
    };

	uint32_t max_nonce = pdata[19] + 100;
    unsigned long hashes_done;
    int rc;

    rc = scanhash_sha256d(thr_id, pdata, ptarget, max_nonce, &hashes_done);
    
    printf("\n\nhashes_done = %ld\n", hashes_done);
    printf("\nrc = %d\n", rc);

    if (rc == 1)
        return 0; // PASS
    else
        return 1; // FAIL
}
