#include<bits/stdc++.h>

#define max_speed  1.0  
#define min_speed  -0.5  
#define max_omega  40.0 * M_PI / 180.0  
#define max_accel  0.2  
#define max_domega  40.0 * M_PI / 180.0  
#define vel_reso  0.01  
#define omega_reso  0.1 * M_PI / 180.0  
#define dt  0.1  
#define predict_time 3.0
#define x_goal 0.00
#define y_goal 0.00
#define velocityWeight 0.33
#define headingWeight 0.33
#define obstacleWeight 0.34

struct state
{
    float x_pos, y_pos, theta, vel, omega;
};
