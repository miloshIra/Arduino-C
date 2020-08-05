import math


n_bobina = 40
wire_per_bob = 17
factor = 1.73
wire_weight = 0.39 #(grams per meter)
hose_meters = 6733


def presmetka():
    metraza = n_bobina*wire_per_bob*factor*hose_meters
    print(metraza)
    masa = metraza*wire_weight
    print(masa)
    kilogrami = masa/1000
    print(kilogrami)

presmetka()
