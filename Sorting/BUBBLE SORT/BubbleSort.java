class BubbleSort{

	public static void bubbleSort(int arr[]){

		int temp;

		for(int i=0; i<arr.length; i++){
			for(int j=0; j<arr.length-i-1; j++){
				if(arr[j] > arr[j+1]){
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}

	public static void main(String args[]){

		int arr[] = {49, 64, 67, 70, 8, 5, 26, 66, 75, 24}, n = 10;

		System.out.print("Orignal Array : ");
		for(int i : arr){
			System.out.print(i + ", ");
		}

		bubbleSort(arr);

		System.out.print("\n Sorted Array : ");
		for(int i : arr){
			System.out.print(i + ", ");
		}

	}
}
