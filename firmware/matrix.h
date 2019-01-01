#ifndef MATRIX_H
#define MATRIX_H

#define MATRIX_ROW_NUM 7
#define MATRIX_COL_NUM 15

struct matrix_report {
  uint16_t pressed[MATRIX_ROW_NUM];
  uint16_t released[MATRIX_ROW_NUM];
};

struct matrix_key {
  unsigned char pressed : 1;
  unsigned char press_time : 7;
};

struct matrix {
  struct matrix_key keys[MATRIX_ROW_NUM][MATRIX_COL_NUM];
};

void matrix_init(struct matrix *m);
void matrix_scan(struct matrix *m, struct matrix_report *r);

#endif
