# [Bronze V] 라면 공식 - 30007 

[문제 링크](https://www.acmicpc.net/problem/30007) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

수학, 구현, 사칙연산

### 제출 일자

2025년 6월 20일 23:00:39

### 문제 설명

<p><em>”꼬불꼬불 꼬불꼬불 맛좋은 라면 라면이 있기에 세상 살맛나 하루에 열개라도 먹을 수 있어 후루룩 짭짭 후루룩 짭짭 맛좋은 라면”</em></p>

<p>예찬이는 라면을 매우 좋아한다. 선린 최고의 라면 애호가답게, 예찬이는 한 끼에도 라면 여러 개를 흡입하고는 한다.</p>

<p>평소 라면을 가장 맛있게 끓일 수 있는 물의 양이 궁금했던 예찬이는 오랜 실험 끝에 마침내 아래와 같은 라면 공식을 만드는 데 성공했다.</p>

<p>$$W_i=A_i(X_i - 1)+B_i$$</p>

<p>단, $W_i$는 필요한 물의 양, $A_i$는 라면 계수, $B_i$는 기본 물의 양, $X_i$는 끓일 라면 수를 나타낸다.</p>

<p>예찬이가 라면을 끓이는 횟수 $N$과 $i$ $(1 \leq i \leq N)$번째로 라면을 끓일 때의 라면 계수 $A_i$, 기본 물의 양 $B_i$, 끓일 라면 수 $X_i$가 주어질 때, 예찬이를 위해 라면 공식에 따라 필요한 물의 양 $W_i$을 계산해 보자.</p>

### 입력 

 <p>첫째 줄에 예찬이가 라면을 끓이는 횟수 $N$이 주어진다.</p>

<p>둘째 줄부터 $N+1$번째 줄까지는 $i + 1$ ($1 \leq i \leq N$)번째 줄에 $A_i$, $B_i$, $X_i$가 공백으로 구분되어 주어진다.</p>

<p>입력으로 주어지는 모든 수는 정수이다.</p>

### 출력 

 <p>$N$개의 줄을 출력하라. 이 중 $i$ ($1 \leq i \leq N$)번째 줄에 $i$번째로 라면을 끓일 때 라면 공식에 따라 필요한 물의 양 $W_i$를 출력하라.</p>

