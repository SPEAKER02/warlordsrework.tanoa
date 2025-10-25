import csv

with open("sec.csv", newline="", encoding="utf-8") as f:
    reader = csv.DictReader(f)
    sectors = list(reader)

with open("sectors.hpp", "w", encoding="utf-8") as out:
    out.write("class CfgWarlordSectors {\n")
    out.write("    connections[] = {\n")
    for s in sectors:
        for c in s["connections"].split(","):
            c = c.strip()
            if c:
                out.write(f'        {{"{s["id"]}", "{c}"}},\n')
    out.write("    };\n\n")

    for s in sectors:
        out.write(f"    class {s['id']} {{\n")
        out.write(f"        area[] = {{{s['areaX']}, {s['areaY']}, {s['angle']}, {s['isRect']}}};\n")
        if s["disableHome"] == "1":
            out.write("        disableHome = 1;\n")
        out.write(f"        location[] = {{{s['x']}, {s['y']}, 0}};\n")
        out.write(f"        name = {s['name']};\n")
        if s["services"]:
            servs = ", ".join(f'"{srv.strip()}"' for srv in s["services"].split(","))
            out.write(f"        services[] = {{{servs}}};\n")
        out.write("    };\n\n")
    out.write("};\n")

