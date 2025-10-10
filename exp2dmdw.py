import csv
import re

def clean_and_deduplicate(names_list):
    cleaned = []

    # Step 1: Clean names using regex (keep only letters & spaces)
    for name in names_list:
        # Remove unwanted characters (anything not a-z or space)
        name = re.sub(r'[^a-zA-Z\s]', '', name)
        # Strip extra spaces and convert to Title Case
        name = " ".join(name.strip().title().split())
        cleaned.append(name)

    # Step 2: Remove redundancy (keep unique names in order)
    unique_cleaned = []
    for name in cleaned:
        if name not in unique_cleaned:
            unique_cleaned.append(name)

    return unique_cleaned


# Predefined names (with duplicates and messy formatting)
names = ["geetika", "pratham", "komal", "yash", "deepanshu",
         "  GeEtika  ", "komal!!", "YASH123", "Deepanshu  "]

print("Original Data:", names)

# Clean & deduplicate
result = clean_and_deduplicate(names)

print("\nCleaned & Non-Redundant Names:")
for name in result:
    print(name)

# Save cleaned names into a CSV file
with open("cleaned_names.csv", "w", newline="") as file:
    writer = csv.writer(file)
    writer.writerow(["Name"])  # header
    for name in result:
        writer.writerow([name])

print("\n✅ Cleaned names have been saved to 'cleaned_names.csv'")
