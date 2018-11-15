TEST_LIB_PATH=./../test/out
UTILLIB_LIB_PATH=./../utillib/out
GOOGLETEST_PATH=./../tools/googletest
GOOGLEMORK_PATH=./../tools/googlemock
CMOCK_PATH=./../tools/C-Mock

all:
	g++ -std=c++11 main.cpp mock_utillib.cpp testcase_test_add.cpp testcase_test_utiladd.cpp testcase_test_utiladd2.cpp -o ut_test.out \
	-I. -I${GOOGLETEST_PATH}/include -I${GOOGLEMORK_PATH}/include -I${CMOCK_PATH}/include -I${UTILLIB_LIB_PATH} -I${TEST_LIB_PATH} \
	-L${GOOGLETEST_PATH}/lib -L${GOOGLEMORK_PATH}/lib -L${UTILLIB_LIB_PATH} -L${TEST_LIB_PATH} \
	-lutillib -ltest -lgmock -lgtest -lgtest_main -lpthread -ldl

clean:
	rm ut_test.out
