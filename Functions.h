#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

namespace BucketSort {

	using namespace std;

	public class Function
	{
	public:
		Function(void)
		{

		}

	protected:
		~Function()
		{

		}

	public:
		// ������� ������������� ��������� ������� ExtremLB
		float get_ExtremeLB(float A, float B, float C)
		{
			float root, right;

			int number = rand() % 1800;

			right = (float)number / RAND_MAX;

			root = A + B * pow(-log(right), -1 / C);

			return (root);
		}

		// ������� ���������� Bucket sort
		template<typename T>
		static void bucketSort(vector<T>& items, int len)
		{

			vector<vector<T> > bucket(len);

			// �������� ������ (����)
			for (auto data : items) {
				T i = len * data;
				bucket[i].push_back(data);
			}
			// ���������� ������� ������ � �����
			for_each(bucket.begin(), bucket.end(), [](vector<T>& elem) {
				sort(elem.begin(), elem.end());
			});

			// ������������
			int index = 0;
			for (int i = 0; i < len; ++i)
				for (int j = 0; j < bucket[i].size(); ++j)
					items[index++] = bucket[i][j];
		}

		// ������� ����������� ���������� ��������� ������� �����
		float* gauss(float** a, float* y, int n)
		{
			float* x, max;
			int k, index;
			const float eps = 0.00001;  // ��������
			x = new float[n];
			k = 0;
			while (k < n)
			{
				// ����� ������ � ������������ a[i][k]
				max = abs(a[k][k]);
				index = k;
				for (int i = k + 1; i < n; i++)
				{
					if (abs(a[i][k]) > max)
					{
						max = abs(a[i][k]);
						index = i;
					}
				}
				// ������������ �����
				for (int j = 0; j < n; j++)
				{
					float temp = a[k][j];
					a[k][j] = a[index][j];
					a[index][j] = temp;
				}
				float temp = y[k];
				y[k] = y[index];
				y[index] = temp;
				// ������������ ���������
				for (int i = k; i < n; i++)
				{
					float temp = a[i][k];
					if (abs(temp) < eps) continue; // ��� �������� ������������ ����������
					for (int j = 0; j < n; j++)
						a[i][j] = a[i][j] / temp;
					y[i] = y[i] / temp;
					if (i == k)  continue; // ��������� �� �������� ���� �� ����
					for (int j = 0; j < n; j++)
						a[i][j] = a[i][j] - a[k][j];
					y[i] = y[i] - y[k];
				}
				k++;
			}
			// �������� �����������
			for (k = n - 1; k >= 0; k--)
			{
				x[k] = y[k];
				for (int i = 0; i < k; i++)
					y[i] = y[i] - a[i][k] * x[k];
			}
			return x;
		}
	};
}