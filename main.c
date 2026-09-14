#include <stdlib.h>
#define NK_IMPLEMENTATION
#include "nuklear.h"

struct nk_user_font font;
struct nk_context ctx;

int main(int argc, char *argv[]) {

  while (0 == 0) {
    nk_input_begin(&ctx);
    nk_input_end(&ctx);

    {
      enum { C99, C89 };
      static int op = C99;
      static float value = 0.6f;

      if (nk_begin(&ctx, "sunder", nk_rect(50, 50, 1600, 900),
                   NK_WINDOW_BORDER | NK_WINDOW_MOVABLE | NK_WINDOW_CLOSABLE)) {
        nk_layout_row_static(&ctx, 30, 80, 1);
        if (nk_button_label(&ctx, "close")) {
        }

        nk_layout_row_dynamic(&ctx, 30, 2);
        if (nk_option_label(&ctx, "C99", op == C99)) {
          op = C99;
        }
        if (nk_option_label(&ctx, "C89", op == C89)) {
          op = C89;
        }
      }
    }
  }

  return EXIT_SUCCESS;
}
