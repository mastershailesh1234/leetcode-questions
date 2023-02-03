function gcd(a, b) {
  while (a != b) {
    if (a > b) {
      a -= b;
    } else {
      b -= a;
    }
  }
  return a;
}

var findGCD = function (nums) {
  var minValue = Math.min(...nums);
  var maxValue = Math.max(...nums);
  return gcd(maxValue, minValue);
};
