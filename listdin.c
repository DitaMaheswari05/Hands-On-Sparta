booelan isIdxValid(ListDin l, IdxType i) {
  return(i >= IDX_MIN && i <= IdxType(CAPACITY(l)))
}

boolean isIdxEff(ListDin l, IdxType i) {
  return(i >= IDX_MIN && i < listLength(l))
    }

boolean isEmpty(ListDin l) {
  return(listLength(l) == 0)
    }

boolean isFull(ListDin l) {
  return(listLength(l) == CAPACITY(l))
    }

void readList(ListDin *l) {
  

