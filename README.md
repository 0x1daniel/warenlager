# warenlager :office:

you throw, I handle

## About

`warenlager` is a database server for linux systems, implementing key-value
storage, document storage, raw storage and queues. The goal is, to make each
feature optional during the compiling process, as well as use assembly to
maximize the performance on linux driven systems.

###### This project is in development

## Documentation

Documentation can be found in [`/doc`](https://github.com/oltdaniel/warenlager/blob/master/doc/README.md).

## Usage

```shell
# Get the code
$ git clone https://github.com/oltdaniel/warenlager
$ cd warenlager
# Compile with hall features (default)
$ WARENLAGER=kv,doc,raw,qu  make
# Compile with selected features
$ WARENLAGER=kv,qu make
```

```shell
# Start server
$ bin/warenlager
# Start server with custom settings
$ bin/warenlager run -p 8192 -h 0.0.0.0
```

## License

_Just do what you'd like to_

[![license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/oltdaniel/warenlager/blob/master/LICENSE)

#### Credit

[Daniel Oltmanns](https://github.com/oltdaniel) - creator
