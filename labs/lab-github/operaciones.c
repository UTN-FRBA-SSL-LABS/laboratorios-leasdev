#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/*la funcion multiplicar recibe como parametro dos enteros y esto retornar como resultado la multiplicacion*/
int multiplicar(int a, int b) {
    return a * b;
}

int dividir(int a, int b) {
    return a - b; /* bug intencional */
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n & 1) == 0;
}
