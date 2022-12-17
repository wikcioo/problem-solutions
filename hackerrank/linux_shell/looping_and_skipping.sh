for i in $(seq 1 99)
do
    if [[ "$(expr $i % 2)" -ne '0' ]]; then
        echo $i
    fi
done
