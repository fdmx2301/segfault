from setuptools import setup, find_packages

setup(
    name='segfault_package',
    version='0.0.1',
    author='pael',
    description='If you ever missed segfaults in Python, there you go',
    long_description=open("README.md").read(),
    long_description_content_type="text/markdown",
    url="https://github.com/fdmx2301/segfault.git",
    packages=find_packages(),
    package_data={'segfault': ['../libsegfault.so']},
    include_package_data=True,
    python_requires='>=3.6',
)