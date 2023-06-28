using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Solution {
 // Complete the flatlandSpaceStations function below.
    static int flatlandSpaceStations(int n, int[] arr) {
        Array.Sort(arr);
        int maxDistance = arr[0];

        for (int i = 1; i < arr.Length; i++)
        {
            int distance = (arr[i] - arr[i - 1]) / 2;
            if (maxDistance < distance)
            {
                maxDistance = distance;
            }
        }

        int lastGap = (n - 1) - arr[arr.Length - 1];

        return (maxDistance < lastGap) ? lastGap : maxDistance;

    }  
}
