#define PI 3.14159265359

/*
 * Este arquivo - "funcoes_bechmark.h" - contem apenas prototipos de funcoes.
 *
 * Autor:
 *  - Andre Hermenegildo Costa Silva
 *
 * Data: 20/07/2014
 *
 *
 */

float de_jongs(float x1, float x2);

float rastrigin(float x1, float x2);

float drop_wave(float x1, float x2);

float griewangk(float x1, float x2);

float shubert(float x1, float x2);

void d_de_jongs(float d[]);

void d_rastrigin(float d[]);

void d_drop_wave(float d[]);

void d_griewangk(float d[]);

void d_shubert(float d[]);