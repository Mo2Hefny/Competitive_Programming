function suffixSums(a) {
  let b = [];
  b[a.length - 1] = a[a.length - 1];
  for (let i = a.length - 2; i >= 0; i--)
    b[i] = a[i] + b[i + 1];
  return b;
}