pipeline {
    agent any

    environment {
        QT_PATH = "/opt/Qt/5.15.0/gcc_64"
        BUILD_LOG = "build.log"
    }

    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Build & Test') {
            steps {
                sh '''
                    export CMAKE_PREFIX_PATH=${QT_PATH}
                    export PATH=$QT_PATH/bin:$PATH
                    export LD_LIBRARY_PATH=$QT_PATH/lib:$LD_LIBRARY_PATH

                    cd test
                    qmake test.pro 2>&1 | tee ${BUILD_LOG}
                    make 2>&1 | tee -a ${BUILD_LOG}
                    make check 2>&1 | tee -a ${BUILD_LOG}
                '''
            }
        }
    }

    post {
        success {
            echo "Build and tests succeeded."
        }
        failure {
            echo "Build or tests failed. Check the log."
        }
        always {
            archiveArtifacts artifacts: 'test/build.log', onlyIfSuccessful: false
        }
    }
}
