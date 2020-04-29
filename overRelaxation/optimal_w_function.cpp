        protected double CalculateOptimalValue(double h, double t)
        {
            double arg1 = Math.PI * h / (2 * (b - a));
            double arg2 = Math.PI * t / (2 * (d - c));
            double a2 = h * h + t * t;
            double lambdaMin = 2 * t * t / (a2) * Math.Sin(arg1) * Math.Sin(arg1)
                + 2 * h * h / (a2) * Math.Sin(arg2) * Math.Sin(arg2);
            w = 2 / (1 + Math.Sqrt(lambdaMin * (2 - lambdaMin)));
            return w;
        }
