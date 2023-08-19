  double ans = 0;
    for(int i=0; i<k; i++) ans += (1+p[idx-i])/2;
    printf("%.10f", ans);