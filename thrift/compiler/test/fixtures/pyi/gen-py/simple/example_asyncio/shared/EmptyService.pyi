#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
import typing as t
import asyncio

from thrift import Thrift
from thrift.protocol.TProtocol import TProtocolBase

import simple.dependent_asyncio.dependent.ttypes
from simple.example_asyncio.shared.ttypes import *


class Iface: ...  # EmptyService
    # These have to be Awaitable because handler methods don't return Futures
    # Clients do return Futures but lsp requires us to say they are both Awaitable
    # You can cast the result of a Client if you need Future

class Client(Iface, t.ContextManager): ...  # EmptyService

class Processor(Iface, Thrift.TProcessor):  # EmptyService
    def __init__(self, handler: Iface) -> None:
        self._handler: Iface
        self._onewayMethods: t.Sequence[t.Callable]
        self._processMap: t.Dict[str, t.Callable]

    def process_main(self, iprot: TProtocolBase, oprot: TProtocolBase, server_ctx: t.Any = ...) -> asyncio.Future: ...
    def onewayMethods(self) -> t.Tuple[t.Callable]: ...
