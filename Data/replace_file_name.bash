for file in *aid*; do
  mv "$file" "$(echo "$file" | sed 's/aid/tc/g')"
done