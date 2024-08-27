evalcfrac() {
    read -p "Enter the continued fraction (space-separated integers): " -a A

    a=${A[${#A[@]}-1]}
    b=1

    for ((i=${#A[@]}-2; i>=0; i--)); do
        temp=$a
        a=$((a*${A[i]} + b))
        b=$temp
    done

    echo "The continued fraction evaluates to: $a / $b = $(echo "scale=10; $a/$b" | bc)"
}
gencfrac() {
    read -p "Enter a non-negative fraction in the format a/b: " fraction

    a=$(cut -d'/' -f1 <<< "$fraction")
    b=$(cut -d'/' -f2 <<< "$fraction")

    echo "The continued fraction expansion of $a / $b is:"
    
    while [[ $b -ne 0 ]]; do
        q=$((a / b))
        r=$((a % b))
        echo -n "$q"
        
        if [[ $r -ne 0 ]]; then
            echo -n " "
        fi

        a=$b
        b=$r
    done

    echo
}
evalcfrac
gencfrac
