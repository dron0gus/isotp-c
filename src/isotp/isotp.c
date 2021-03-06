#include <isotp/isotp.h>
#include <bitfield/bitfield.h>
#include <inttypes.h>

IsoTpShims isotp_init_shims(LogShim log, SendCanMessageShim send_can_message,
        SetTimerShim set_timer, void* send_can_private) {
    IsoTpShims shims;
    shims.log = log;
    shims.send_can_message = send_can_message;
    shims.set_timer = set_timer;
    shims.frame_padding = ISO_TP_DEFAULT_FRAME_PADDING_STATUS;
    shims.private_data = send_can_private;

    return shims;
}


