from setuptools import setup, find_packages

setup(
    name='segfault_package',
    version='0.1',
    description='If you ever missed segfaults in Python, there you go',
    author='pael',
    packages=find_packages(),
    package_data={'segfault': ['../libsegfault.so']},
    include_package_data=True,
)