
extern "C" {
#include <echo.h>
}
#include "speex/speex_echo.h"
#include "speex/speex_preprocess.h"
#pragma comment(lib, "libspeexdsp.lib")
#pragma comment(lib, "oslec.lib")

#define BSIZE     15360

class PAec : public PObject
{
  PCLASSINFO(PAec, PObject);
public:

  /**@name Construction */
  //@{
  /**Create a new canceler.
   */
     PAec(int _algo);
     ~PAec();
  //@}

  /**@@name Basic operations */
  //@{
  /**Recording Channel. Should be called prior to encoding audio
   */
    void Send(BYTE * buffer, unsigned & length);

  /**Playing Channel  Should be called after decoding and prior to playing.
   */
    void Receive(BYTE * buffer, unsigned & length);
  //@}

protected:
//  PMutex readwritemute;
//  PQueueChannel *echo_chan;
 echo_can_state_t *oslecC;
 SpeexEchoState *st;
 SpeexPreprocessState *den;
 SpeexEchoState *st1;
 SpeexPreprocessState *den1;
 int algo;

 BYTE rbuf[BSIZE];
 int spos;
 int rpos;
 int mode;
 int tstamp;
 int tcount;
 int aec_disable;
 int t_buf[60000];
 int t_len;
 int t_num;
 int s_sum;
 int s_buf[20];
 int s_pos;
 int s_trk[60000][2];
 int s_trk_pos;
 char *t_buffer;
 int t_sz;
 int t_pos;
 BYTE rframe[480]; // ����������� ����� � ���������, ����������� �� rbuf ��� ���������� Speex � Easy
};

