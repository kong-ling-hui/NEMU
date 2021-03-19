def_EHelper(ld) {
  rtl_lms(s, ddest, dsrc1, id_src2->imm, 8, MMU_DYNAMIC);
}

def_EHelper(lw) {
  rtl_lms(s, ddest, dsrc1, id_src2->imm, 4, MMU_DYNAMIC);
}

def_EHelper(lh) {
  rtl_lms(s, ddest, dsrc1, id_src2->imm, 2, MMU_DYNAMIC);
}

def_EHelper(lb) {
  rtl_lms(s, ddest, dsrc1, id_src2->imm, 1, MMU_DYNAMIC);
}

def_EHelper(lwu) {
  rtl_lm(s, ddest, dsrc1, id_src2->imm, 4, MMU_DYNAMIC);
}

def_EHelper(lhu) {
  rtl_lm(s, ddest, dsrc1, id_src2->imm, 2, MMU_DYNAMIC);
}

def_EHelper(lbu) {
  rtl_lm(s, ddest, dsrc1, id_src2->imm, 1, MMU_DYNAMIC);
}

def_EHelper(sd) {
  rtl_sm(s, dsrc1, id_src2->imm, ddest, 8, MMU_DYNAMIC);
}

def_EHelper(sw) {
  rtl_sm(s, dsrc1, id_src2->imm, ddest, 4, MMU_DYNAMIC);
}

def_EHelper(sh) {
  rtl_sm(s, dsrc1, id_src2->imm, ddest, 2, MMU_DYNAMIC);
}

def_EHelper(sb) {
  rtl_sm(s, dsrc1, id_src2->imm, ddest, 1, MMU_DYNAMIC);
}
