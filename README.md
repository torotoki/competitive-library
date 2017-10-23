[![GitHub license](https://img.shields.io/github/license/torotoki/competitive-library.svg)](https://github.com/asi1024/competitive-library/blob/master/LICENSE)
[![Build Status](https://travis-ci.org/torotoki/competitive-library.svg?branch=master)](https://travis-ci.org/asi1024/competitive-library)

# competitive-library

asi1024 様の [competitive-library](https://github.com/asi1024/competitive-library) を，MITライセンスを引き継いでフォークし，ちょっとした設定を自分用に変えたものです．ほとんどの部分はオリジナルと変わりません．基本的にオリジナルを参照．

[GitHub Pages](https://torotoki.github.io/competitive-library/)

# Original README:

競技プログラミング用ライブラリ管理ツール

1. Fork this repository.
2. `cpp/[category]/[filename.cpp]` を好みに追加したり書き換えたりする
3. `cpp/[AOJ-Problem-ID.cpp]` に書いたライブラリを include して問題を解く (optional)

## Automated Testing
4. `CXX` と `CXXFLAGS` を指定して `cpp/spec.sh` を走らせる (例:`CXX=g++ CXXFLAGS="--std=c++14 -O2 -Wall" ./cpp/spec.sh -all`)
5. (optional) Travis CI の方の設定をいい感じにする ([こんな感じ](https://travis-ci.org/asi1024/competitive-library/jobs/219386700#L307) になる)

## Generates Documentation
4. `./gendoc.sh` を走らせると， `docs/index.md` が生成される
5. GitHub Pages の設定をする ([こんな感じ](https://asi1024.github.io/competitive-library/) になる)

### GitHub Pages を公開する方法
- Settings -> GitHub Pages -> Source を ``master branch /docs folder'' にする

### GitHub Pages のプレビュー
- 以下を行う
```
$ cd docs
$ gem update bundler
$ bundle install
$ bundle exec jekyll serve
```
- `Server address` が表示されるので，ブラウザでそこにアクセスする
- 詳しくは[ここ](https://github.com/github/pages-gem)とかを見てくれ

## How to Contribute
- [Issue](https://github.com/asi1024/competitive-library/issues/new)
- [Pull Request](https://github.com/asi1024/competitive-library/pull/new/master)

## Contributors
- [Contributors](https://github.com/asi1024/competitive-library/graphs/contributors)
