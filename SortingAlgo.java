/**
 * Sorting Algos
 * @author Andrew Berendsen
 * @version October 2, 2016
 */
public class SortingAlgo {

    /*This function uses the bubble sorting algo to order an array from smallest to largest*/
    private int[] bubble(int[] array){
        for (int i = 1; i < array.length; i++) {
            for (int j = 0; j < array.length; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
        return array;
    }

    /*This function uses the selection sorting algo to order an array from smallest to largest*/
    private int[] selection(int[] array){
        for (int  i = 0; i < array.length - 1; i++) {
            int maxValue = i;
            for (int j = i + 1; j < array.length; j++){
                if (array[j] > array[maxValue])
                    maxValue = j;
            }
            int temp = array[i];
            array[i] = array[maxValue];
            array[maxValue] = temp;
        }
        return array;
    }

    /*This function uses the insertion sorting algo to order an array from smallest to largest*/
    private int[] insertion(int[] array){
        for (int i = 1; i < array.length; i++) {
            int j = i - 1;
            while (j >= 0 && array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j] = temp;
                j = j - 1;
            }
        }
        return array;
    }

    /*This function uses the count sorting algo to order an array from smallest to largest*/
    private int[] count(int[] array){

        return array;
    }
}
