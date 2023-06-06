#include <iostream>
#include <map>
using namespace std;
int main()
{
	//��Ƽ�� �ߺ� ���
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	multimap <int, int> m_map;
	multimap <int, int>::iterator erase;
	pair <multimap<int, int>::iterator, multimap<int, int>::iterator> ret;


	int count = 0;
	int order = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> order;

		if (order == 0)
		{
			if (m_map.size() == 0)
			{
				cout << 0 << endl;
				continue;
			}
			erase = m_map.begin();
			if (m_map.count(erase->first) >= 2)
			{
				ret=m_map.equal_range(erase->first);
				int tmp = 0;
				erase = ret.first;//ù��° ���� ���� �ؿ��� �Ȱɸ��ٸ� �ش��ϴ°��� ����
				for (std::multimap<int, int>::iterator it = ret.first; it != ret.second; ++it)
				{
					tmp = ret.first->second;
					if (tmp > it->second)
					{
						tmp = it->second;//�ι�° ���� ���� �������� iter�� ����Ű���� ����
						erase = it;
					}
				}
				cout << erase->second << endl;
				m_map.erase(erase);
				continue;
			}
			cout << erase->second << endl;
			m_map.erase(erase);
			continue;
		}
		m_map.insert(make_pair(abs(order), order));
	}

	return 0;
}