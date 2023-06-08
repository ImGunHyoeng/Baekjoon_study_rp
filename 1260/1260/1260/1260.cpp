// 1260.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//일단 배열로 만들기
//구조체 선언 이거는 동적할당 했을시에
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //구조체를 받아올 포인터 선언
    //해당하는것을 포인터에다가 해당하는값을 집어넣음
    int **v;
    int* visted_v;
    int v_count;
    int edge_c;
    cin >>v_count;//정점의 개수 세기
    v = new int*[v_count];
    for (int i = 0; i < v_count; i++)
    {
        v[i] = new int[v_count];
        for (int j = 0; j < v_count; j++)
            v[i][j] = 0;
    }
    
    cin >> edge_c;//연결선의 개수
    int start_edge;
    int end_edge;

    for (int i = 0; i < edge_c; i++)
    {
        cin >> start_edge;
        cin >> end_edge;
        v[start_edge][end_edge] = 1;
    }

    //무한반복 BFS모든 값을 들려야 하기에 모든값을 들렸다면 이를 종료
    std::cout << "Hello World!\n";
    //ㅇㅇㅇㅇㅇ
}

