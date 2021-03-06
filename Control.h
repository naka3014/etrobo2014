/* 2012/08/08 created by s.sahara ๏NAPฬeXgp */

/*
ฉฎงไnvZึA
*/


#define DELTA_T 0.004f // 4ms
#define CONTROL_CYCLE 4

/*
Pงไ
kp:ไแQC command:ฺWl error:๋ท max:งไสmax min:งไสmin
฿่l:งไส
*/
extern float ControlP(float kp, float command, float error, float max, float min);

/*
PDงไ
kp:ไแQC command:ฺWl error:๋ท hensa0:O๑ฮท hensa1:ก๑ฮท max:งไสmax min:งไสmin
฿่l:งไส
*/
extern float ControlPD(float kp, float kd, float command, float error, float hensa0, float* hensa1, float max, float min);


/*
PIDงไ
kp:ไแQC command:ฺWl error:๋ท hensa0:O๑ฮท hensa1:ก๑ฮท integral:ฯชl max:งไสmax min:งไสmin
฿่l:งไส
*/
extern float ControlPID(float kp, float ki, float kd, float command, float error, float hensa0, float* hensa1, float* integral, float max, float min);

extern float SCurve(float Vaft, float Vbfr, float Tmax, float* T);
