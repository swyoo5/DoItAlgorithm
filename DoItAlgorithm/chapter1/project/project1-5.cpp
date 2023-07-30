//중앙값을 구하는 함수는 다음과 같이 작성할 수도 있습니다. 그러나 실습 1c-1의 med3 함수에 비해 효율이 떨어지는데 그 이유랄 설명하세요.
//
//int med3(int a, int b, int c)
//{
//    if ((b >= a && c <= a) || (b <= a && c >= a))
//        return a;
//    else if ((a > b && c < b) || (a < b && c > b))
//        return b;
//    else
//        return c;
//}

/*
if ((b >= a && c <= a) || ( b <= a && c >= a)
else if ((a > b && c < b) || (a < b && c > b)
첫번째 if문이 성립되지 않은 경우, 두번째 if문에서도 같은 판정을 하므로(b >= a, b > a) 효율이 나빠진다.
*/
