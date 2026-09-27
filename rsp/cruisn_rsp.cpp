#include "rsp_contract.hpp"

#include "ultramodern/ultra64.h"

extern RspUcodeFunc n_aspMain;

extern "C" RspUcodeFunc* cruisn_get_rsp_microcode(const OSTask* task) {
    if (task != nullptr && task->t.type == M_AUDTASK) {
        return &n_aspMain;
    }
    return nullptr;
}
