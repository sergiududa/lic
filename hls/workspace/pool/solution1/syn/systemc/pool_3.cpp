#include "pool.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pool::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_r_address0\" :  \"" << output_r_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_r_ce0\" :  \"" << output_r_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_r_we0\" :  \"" << output_r_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_r_d0\" :  \"" << output_r_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"image_r_address0\" :  \"" << image_r_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"image_r_ce0\" :  \"" << image_r_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"image_r_q0\" :  \"" << image_r_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"image_r_address1\" :  \"" << image_r_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"image_r_ce1\" :  \"" << image_r_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"image_r_q1\" :  \"" << image_r_q1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

