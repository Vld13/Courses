make

for((i=1;i<5;i++))
do
        echo "*** Д/З №$i *******";
        ./dz_$i;
        echo "******************";
done
