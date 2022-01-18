#pragma once
#include "common.h"

//random in work
float random(int ran1, int ran2, int cyc){
    float arr[] = {
        16.0, 50.0, 100.0, 30.0, 56.0, 34.0, 20.0,
        10.0, 22.0, 30.0, 42.0, 4.0, 8.0, 3000.0,
        64.0, 5.0, 99.0, 7.0, 2.0, 55.0, 255.0,
        2.0
    };
    float val;
    for(int i; i<cyc; i++){
        val + arr[i];
        val * PI;
        val + arr[3];
        val - i;
        val - PI;
    }
    while(!val > ran1 && ! val < ran2){
        val - PI;
    }
    return val;
}

//circle maths
float circle_d(float r){
    float val;
    val = r * 2;
    return val;
}

float circle_r(float d){
    float val;
    val = d / 2;
    return val;
}
float circle_A(float r){
    float val;
    val = PI * (r*r);
    return val;
}

float circle_u_r(float r){
    float val;
    val = 2 * (PI*r);
    return val;
}
float circle_u_d(float d){
    float val;
    val = PI * d;
    return val;
}
float circle_b(float r, float a){
    float val;
    val = (PI*r*a) / 180;
    return val;
}
float circle_b_A(float r, float a){
    float b;
    float val;
    b = (PI * r * a) / 180;
    val = (b*r) / 2;
    return val;
}

//rectangel maths
float rec_A(float a){
    float val;
    val = a*a;
    return val;
}
float rec_u(float a){
    float val;
    val = a * 4;
    return val;
}
float qu_A(float a, float b){
    float val;
    val = a*b;
    return val;
}
float qu_u(float a, float b){
    float val;
    val = 2 * (a+b);
    return val;
}
