import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the flatlandSpaceStations function below.
    static int flatlandSpaceStations(int n, int[] arr) {
        Arrays.sort(arr);
        int maxDistance = arr[0];

        for (int i = 1; i < arr.length; i++) {
            int distance = (arr[i] - arr[i - 1]) / 2;
            if (maxDistance < distance) {
                maxDistance = distance;
            }
        }

        int lastGap = (n - 1) - arr[arr.length - 1];

        return (maxDistance < lastGap) ? lastGap : maxDistance;

    }
}
