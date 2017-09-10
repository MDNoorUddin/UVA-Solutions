import java.util.*;
public class a{
    public static int divisorCount(int n) {
    if (n == 1)
        return 1;
    int count = 0;
    int sqrt = (int)Math.sqrt(n);
    for (int i = 1; i <= sqrt; i++)
        if (n % i == 0)
            count += 2;
    if (sqrt * sqrt == n)
        count--;
    return count;
}
  public static void main(String[] args) throws Exception {
    Scanner in = new Scanner(System.in);
    int tests = in.nextInt();
    for (int test = 0; test < tests; test++) {
        int L = in.nextInt(),
            U = in.nextInt(),
            maxDivisorCount = 0,
            maxNumber = 0;
        for (int i = L; i <= U; i++) {
            int currentDivisorCount = divisorCount(i);
            if (currentDivisorCount > maxDivisorCount) {
                maxDivisorCount = currentDivisorCount;
                maxNumber = i;
            }
        }
        System.out.printf("Between %d and %d, %d has a maximum of %d divisors.\n", L, U, maxNumber, maxDivisorCount);
    }
}
}
